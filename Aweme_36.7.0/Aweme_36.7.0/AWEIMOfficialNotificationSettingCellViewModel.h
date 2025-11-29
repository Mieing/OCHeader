@class NSString;

@interface AWEIMOfficialNotificationSettingCellViewModel : NSObject

@property (copy, nonatomic) NSString *cellIdentifier;
@property (retain, nonatomic) id model;
@property (nonatomic) long long group;
@property (readonly, copy, nonatomic) NSString *accountType;
@property (nonatomic) double cellHeight;

- (void)onSwitchValueChanged:(id)a0;
- (void)onArrowTapped;
- (id)initWithCellIdentifier:(id)a0 model:(id)a1 group:(long long)a2 accountType:(id)a3;
- (void)fetchStateWithParams:(id)a0 completion:(id /* block */)a1;
- (void)trackSettingClickWithSwitchStatus:(BOOL)a0 switchType:(unsigned long long)a1 subscribeModel:(id)a2;
- (void).cxx_destruct;

@end
