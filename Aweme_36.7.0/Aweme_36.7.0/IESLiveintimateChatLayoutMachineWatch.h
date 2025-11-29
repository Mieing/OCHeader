@class NSString;

@interface IESLiveintimateChatLayoutMachineWatch : NSObject <IESLiveIntimateChatLayoutMachine>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (nonatomic) struct CGSize { double width; double height; } sessionSize;
@property (nonatomic) double sessionPortraitSpace;
@property (nonatomic) BOOL appDataCalculateed;
@property (nonatomic) BOOL isPCMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithStreamAppData:(id)a0;

@end
