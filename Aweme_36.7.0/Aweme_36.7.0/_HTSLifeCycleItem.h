@protocol HTSAppLifeCycle;

@interface _HTSLifeCycleItem : NSObject

@property (retain, nonatomic) id<HTSAppLifeCycle> module;
@property (nonatomic) struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *machHeader;

- (void).cxx_destruct;

@end
