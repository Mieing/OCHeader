@class NSString;

@interface AWEContentPreferenceRecordModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long labelShownCount;
@property (nonatomic) long long labelHiddenCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
