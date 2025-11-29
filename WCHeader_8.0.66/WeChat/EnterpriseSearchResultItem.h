@class NSString, NSObject;

@interface EnterpriseSearchResultItem : NSObject

@property (nonatomic) unsigned int matchField;
@property (retain, nonatomic) NSString *matchText;
@property (retain, nonatomic) NSObject *item;

- (id)initWithObject:(id)a0 matchField:(unsigned int)a1 matchText:(id)a2;
- (void).cxx_destruct;

@end
