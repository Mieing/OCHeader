@class BusinessActionInfo, NSString, BusinessDetailInfo, BusinessExtendInfo;

@interface BSBusinessCommonItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) BusinessDetailInfo *detailInfo;
@property (retain, nonatomic) BusinessExtendInfo *extendInfo;
@property (retain, nonatomic) BusinessActionInfo *actionInfo;

+ (id)fromServerObj:(id)a0;

- (void).cxx_destruct;

@end
