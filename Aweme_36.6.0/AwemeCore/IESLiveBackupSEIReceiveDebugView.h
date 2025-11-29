@class UILabel, NSMutableDictionary;

@interface IESLiveBackupSEIReceiveDebugView : UIView

@property (retain, nonatomic) UILabel *playerPTSLabel;
@property (retain, nonatomic) UILabel *backupSEIPTSLabel;
@property (retain, nonatomic) UILabel *wrdsPTSLabel;
@property (retain, nonatomic) UILabel *strategyLabel;
@property (retain, nonatomic) NSMutableDictionary *strategyDic;

- (id)desWithStartegy:(unsigned long long)a0;
- (void)updateCurrentPlayerPTS:(id)a0;
- (void)updateCurrentBackupSEIMaxPTS:(id)a0 minPTS:(id)a1;
- (void)updateCurrentWRDSMaxPTS:(id)a0;
- (void)updateStrategy:(unsigned long long)a0 extra:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupView;

@end
