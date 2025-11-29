@class NSString;

@interface AWEInviteFriendCellModel : NSObject

@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned long long type;

- (id)initWithTitle:(id)a0 imageName:(id)a1 type:(unsigned long long)a2;
- (id)initWithTitle:(id)a0 desc:(id)a1 imageName:(id)a2 type:(unsigned long long)a3;
- (void).cxx_destruct;

@end
