@class NSString;

@interface AWEAntiAddictRemindVideoInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *primaryTitle;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithAid:(id)a0 primaryTitle:(id)a1 secondaryTitle:(id)a2;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isEmptyModel;
- (void).cxx_destruct;

@end
