@class NSString, NSMutableArray, PKSubTabKey;

@interface RivalsRecommendResponse_PKSubTab : IESLivePBBaseMessage

@property (retain, nonatomic) PKSubTabKey *key;
@property (nonatomic) BOOL hasKey;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL selected;
@property (retain, nonatomic) NSMutableArray *areasArray;
@property (readonly, nonatomic) unsigned long long areasArray_Count;
@property (copy, nonatomic) NSString *eventTrackingInfo;

+ (id)descriptor;

@end
