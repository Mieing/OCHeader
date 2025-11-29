@class NSString, NSMutableArray;

@interface WAAppAuthorizationDetailViewModel : MMObject

@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *authorizationDetailString;
@property (retain, nonatomic) NSMutableArray *optionItems;
@property (nonatomic) unsigned int choosenState;

- (void).cxx_destruct;

@end
