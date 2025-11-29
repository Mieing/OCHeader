@class NSString;

@interface WCFinderJumperProfileParams : NSObject <YYModel>

@property (copy, nonatomic) NSString *username;
@property (nonatomic) int tabType;
@property (nonatomic) BOOL isSetFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
