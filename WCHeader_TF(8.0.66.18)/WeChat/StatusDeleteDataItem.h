@class NSString;

@interface StatusDeleteDataItem : NSObject

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *textStateId;
@property (nonatomic) unsigned int sequence;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
