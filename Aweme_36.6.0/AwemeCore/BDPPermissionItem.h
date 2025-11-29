@class NSString, NSAttributedString, NSDictionary;

@interface BDPPermissionItem : NSObject

@property (nonatomic) BOOL on;
@property (nonatomic) double cellHeight;
@property (nonatomic) long long itemType;
@property (nonatomic) long long infoType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *scope;
@property (copy, nonatomic) NSAttributedString *detailDesctiption;
@property (nonatomic) long long priority;
@property (copy, nonatomic) id /* block */ onClickCallback;
@property (copy, nonatomic) id /* block */ onSwitchCallback;
@property (copy, nonatomic) NSDictionary *extra;

- (void).cxx_destruct;
- (id)init;

@end
