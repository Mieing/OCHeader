@class NSString;

@interface MJShootRecordingTimerSwitchItem : NSObject <MJShootBubbleSwitchItem>

@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 mode:(unsigned long long)a1;
- (void).cxx_destruct;

@end
