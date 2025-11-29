@class NSString, NSHashTable;

@interface ACCStickerGroupedApplyPredicate : NSObject <ACCStickerApplyPredicate>

@property (retain, nonatomic) NSHashTable *predicates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
