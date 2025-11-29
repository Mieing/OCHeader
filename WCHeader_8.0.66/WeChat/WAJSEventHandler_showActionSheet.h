@class NSString, WAWebActionSheet;

@interface WAJSEventHandler_showActionSheet : WAJSEventHandler_BaseEvent <WAWebActionSheetDelegate>

@property (retain, nonatomic) WAWebActionSheet *actionSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
