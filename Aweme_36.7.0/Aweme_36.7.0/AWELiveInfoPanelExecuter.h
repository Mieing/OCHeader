@class NSString;

@interface AWELiveInfoPanelExecuter : NSObject <DUXSheetDelegate>

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL executeButtonActionAfterClose;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
