@class NSString, AWESearchTabPopoverViewConfig;

@interface AWESearchTabPopoverView : NSObject <DUXPopoverContent>

@property (retain, nonatomic) AWESearchTabPopoverViewConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxPopover_view;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
