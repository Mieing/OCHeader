@class NSString;

@interface IESMLUtils : NSObject

@property (retain, nonatomic) NSString *IESMLKeywords_Top1;
@property (retain, nonatomic) NSString *IESMLKeywords_Result;
@property (retain, nonatomic) NSString *IESMLKeywords_ImageBuffer;
@property (retain, nonatomic) NSString *IESMLKeywords_ImageMaxWidth;
@property (retain, nonatomic) NSString *IESMLKeywords_ImageMaxHeight;
@property (retain, nonatomic) NSString *IESMLKeywordsReport_TimeCost;
@property (retain, nonatomic) NSString *IESMLKeywordsReport_ID;
@property (retain, nonatomic) NSString *IESMLKeywordsReport_Succ;
@property (retain, nonatomic) NSString *IESMLKeywordsReport_ErrCode;

+ (id)sharedInstance;

- (id)errCode2Number:(int)a0;
- (void).cxx_destruct;

@end
