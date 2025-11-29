@class UserStructV2, NSMutableArray;

@interface SelectBillboardAuthorDetail : GPBMessage

@property (retain, nonatomic) UserStructV2 *author;
@property (nonatomic) BOOL hasAuthor;
@property (retain, nonatomic) NSMutableArray *awemeListArray;
@property (readonly, nonatomic) unsigned long long awemeListArray_Count;

+ (id)descriptor;

@end
