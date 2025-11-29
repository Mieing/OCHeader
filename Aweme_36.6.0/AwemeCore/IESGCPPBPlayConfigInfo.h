@class NSString, NSMutableArray, GPBInt32Array;

@interface IESGCPPBPlayConfigInfo : GPBMessage

@property (retain, nonatomic) NSMutableArray *supportGameIdsArray;
@property (readonly, nonatomic) unsigned long long supportGameIdsArray_Count;
@property (copy, nonatomic) NSString *descHint;
@property (nonatomic) int descLimit;
@property (retain, nonatomic) GPBInt32Array *peopleCountOptionArray;
@property (readonly, nonatomic) unsigned long long peopleCountOptionArray_Count;
@property (nonatomic) int fareMax;
@property (nonatomic) int fareMin;
@property (copy, nonatomic) NSString *fareDescHint;
@property (nonatomic) int fareDescLimit;
@property (copy, nonatomic) NSString *fareCountHint;

+ (id)descriptor;

@end
