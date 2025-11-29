@class NSMutableArray;

@interface BDPNovelContentViewControllerPool : NSObject

@property (retain, nonatomic) NSMutableArray *controllers;

- (id)getNewContentViewController:(id)a0;
- (void)markAllVCtoRecycle;
- (void).cxx_destruct;
- (id)init;

@end
