@class NSString;

@interface IESLivePcPadItemD : NSObject

@property (readonly, nonatomic) BOOL isPad;
@property (readonly, nonatomic) BOOL isPc;
@property (readonly, nonatomic) BOOL isPhone;
@property (readonly, nonatomic) BOOL isWeb;
@property (readonly, nonatomic) BOOL isDesktop;
@property (nonatomic) long long typeDevOptimization;
@property (nonatomic) long long deviceID;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *system;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) id extraData;

- (id)initWithDic:(id)a0;
- (void).cxx_destruct;
- (long long)compareVersion:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
