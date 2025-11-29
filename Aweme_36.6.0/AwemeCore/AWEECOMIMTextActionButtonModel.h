@class NSString;

@interface AWEECOMIMTextActionButtonModel : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL disable;
@property (copy, nonatomic) NSString *actionTypeString;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *tips;
@property (nonatomic) BOOL hasNoPermisssion;
@property (copy, nonatomic) id /* block */ buttonActionBlock;

- (void).cxx_destruct;

@end
