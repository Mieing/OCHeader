@class NSData, NSString;

@interface WCShareItem : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *fileName;

+ (id)itemWithDictionary:(id)a0;

- (id)toDictionary;
- (void).cxx_destruct;

@end
