@class NSString, NSMutableDictionary, NSMutableSet;

@interface FTSContactSearchParameter : NSObject

@property (retain, nonatomic) NSString *query;
@property (nonatomic) int type;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (nonatomic) BOOL isMultiSearchGroupMember;
@property (retain, nonatomic) NSMutableDictionary *groupRelation;
@property (retain, nonatomic) NSMutableSet *matchGroups;

- (void).cxx_destruct;

@end
