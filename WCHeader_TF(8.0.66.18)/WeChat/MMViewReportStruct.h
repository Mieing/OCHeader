@class NSString;

@interface MMViewReportStruct : NSObject

@property (readonly, nonatomic) NSString *viewId;
@property (readonly, nonatomic) BOOL checkViewExposure;
@property (readonly, nonatomic) BOOL checkBtnNoResponse;
@property (readonly, nonatomic) BOOL checkColor;
@property (readonly, nonatomic) int bgColor;
@property (readonly, nonatomic) long long event;
@property (readonly, nonatomic) NSString *customKey;

+ (id)ViewReportStructWithViewId:(id)a0 checkViewExposure:(BOOL)a1 checkBtnNoResponse:(BOOL)a2 checkColor:(BOOL)a3 bgColor:(int)a4 event:(long long)a5 customKey:(id)a6;

- (id)initWithViewId:(id)a0 checkViewExposure:(BOOL)a1 checkBtnNoResponse:(BOOL)a2 checkColor:(BOOL)a3 bgColor:(int)a4 event:(long long)a5 customKey:(id)a6;
- (id)description;
- (void).cxx_destruct;

@end
