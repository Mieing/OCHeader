@class NSString, NSData, NSDictionary;

@interface ACAppChannelResponse : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSDictionary *extraInfo;

- (id)initWithName:(id)a0;
- (void).cxx_destruct;

@end
