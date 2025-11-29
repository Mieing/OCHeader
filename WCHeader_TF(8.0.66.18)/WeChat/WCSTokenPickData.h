@class NSString, NSMutableArray, NSMutableDictionary;

@interface WCSTokenPickData : NSObject

@property (nonatomic) char type;
@property (retain, nonatomic) NSString *nsTokenQuery;
@property (retain, nonatomic) NSString *nsTokenUsr;
@property (nonatomic) long long resultSection;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) NSMutableArray *arrResult;
@property (retain, nonatomic) NSMutableDictionary *dicMatchTip;
@property (retain, nonatomic) NSString *sectionTitle;
@property (nonatomic) BOOL multiSelect;
@property (retain, nonatomic) NSMutableArray *arrMultiSelectedUsr;
@property (retain, nonatomic) NSMutableDictionary *dicMultiSelectedUsrIndex;

- (void).cxx_destruct;

@end
