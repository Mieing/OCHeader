@class NSString;

@interface EmoticonBoardDataEventCenterImpl : NSObject <EmoticonBoardDataEventCenterBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCallback:(id)a0;
- (void)onEmoticonThumbUpdatedAsync:(unsigned long long)a0 md5:(id)a1 thumbPath:(id)a2;

@end
