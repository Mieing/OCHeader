@class NSString;

@interface AWERTVFeedCastTypeItemModel : NSObject

@property (readonly, nonatomic) long long castType;
@property (readonly, copy, nonatomic) NSString *iconName;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=isCasting) BOOL casting;

- (id)initWithType:(long long)a0 iconName:(id)a1 title:(id)a2 casting:(BOOL)a3;
- (void).cxx_destruct;

@end
