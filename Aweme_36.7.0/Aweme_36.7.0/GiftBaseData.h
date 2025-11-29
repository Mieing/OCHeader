@class NSMutableArray;

@interface GiftBaseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *giftBaseListArray;
@property (readonly, nonatomic) unsigned long long giftBaseListArray_Count;
@property (nonatomic) long long version;

+ (id)descriptor;

@end
