@class NSString, NSArray;

@interface EnterpriseSearchContactCellData : NSObject

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *headImageUrl;
@property (nonatomic) unsigned int matchField;
@property (retain, nonatomic) NSString *matchText;
@property (retain, nonatomic) NSArray *keywords;

- (void).cxx_destruct;

@end
