@class NSDictionary, NSString;

@interface AWEInviteSearchTableViewCell : AWESearchUserTableViewCell <AWEInviteSearchTableViewCellProtocol>

@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) id /* block */ rightButtonClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCellType:(long long)a0 cellStyle:(long long)a1 reuseIdentifier:(id)a2;
- (void)p_setupUI;
- (void)canEnterLiveRoom;
- (void).cxx_destruct;

@end
