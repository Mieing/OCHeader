@class NSString;
@protocol DUXPopoverContent;

@interface AWEIMDUXPopoverContentWrapper : NSObject <DUXPopoverContent, IESIMPopoverContent>

@property (retain, nonatomic) id<DUXPopoverContent> duxPopoverContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxPopover_view;
- (id)iesim_popoverView;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;

@end
