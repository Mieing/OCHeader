@class NSString, HTSLiveCommonDot;

@interface HTSLiveItemDotInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *showPath;
@property (copy, nonatomic) NSString *showItemId;
@property (retain, nonatomic) HTSLiveCommonDot *dot;
@property (nonatomic) BOOL hasDot;

+ (id)descriptor;

@end
