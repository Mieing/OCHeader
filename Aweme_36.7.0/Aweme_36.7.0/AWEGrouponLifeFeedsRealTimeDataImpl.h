@class NSString;

@interface AWEGrouponLifeFeedsRealTimeDataImpl : NSObject <AWEGrouponLifeFeedsRealTimeDataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchRealTimeDataWithScene:(id)a0 callback:(id /* block */)a1;

@end
