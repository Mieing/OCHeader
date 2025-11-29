@class NSString;

@interface AWELiteActivityPopupTrackEvent : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *showEvent;
@property (copy, nonatomic) NSString *clickEvent;
@property (copy, nonatomic) NSString *closeEvent;
@property (copy, nonatomic) NSString *successEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
