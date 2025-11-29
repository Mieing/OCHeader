@class NSString;

@interface WCFinderUniversalPlayerInfoModel : NSObject <YYModel>

@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSString *nonceID;
@property (copy, nonatomic) NSString *exportID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
