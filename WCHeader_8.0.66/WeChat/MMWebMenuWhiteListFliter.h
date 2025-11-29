@class NSString, NSMutableSet;

@interface MMWebMenuWhiteListFliter : MMObject <MMWebViewPresetMenuItemFliter>

@property (retain, nonatomic) NSMutableSet *setAllowMenuItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)baseFunctionMenuFliter;

@end
