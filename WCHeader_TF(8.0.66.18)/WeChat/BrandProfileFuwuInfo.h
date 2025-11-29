@class NSString, NSMutableArray, MpEcsJumpInfo;

@interface BrandProfileFuwuInfo : NSObject

@property (retain, nonatomic) NSString *id;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *titleStr;
@property (retain, nonatomic) NSString *valueStr;
@property (retain, nonatomic) NSMutableArray *subFuwuInfoList;
@property (nonatomic) unsigned long long row;
@property (nonatomic) unsigned long long column;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) unsigned long long showIconType;
@property (retain, nonatomic) MpEcsJumpInfo *menuEcsJumpInfo;

- (BOOL)isSameFuwuInfoWith:(id)a0;
- (void).cxx_destruct;

@end
