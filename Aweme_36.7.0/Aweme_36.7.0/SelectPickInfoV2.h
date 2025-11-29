@class NSString, NSMutableArray;

@interface SelectPickInfoV2 : GPBMessage

@property (nonatomic) BOOL isPicked;
@property (nonatomic) BOOL hasIsPicked;
@property (nonatomic) BOOL disablePick;
@property (nonatomic) BOOL hasDisablePick;
@property (retain, nonatomic) NSMutableArray *pickUserInfoListArray;
@property (readonly, nonatomic) unsigned long long pickUserInfoListArray_Count;
@property (nonatomic) BOOL isShowDanmaku;
@property (nonatomic) BOOL hasIsShowDanmaku;
@property (copy, nonatomic) NSString *danmakuSchema;
@property (nonatomic) BOOL hasDanmakuSchema;

+ (id)descriptor;

@end
