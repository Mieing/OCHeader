@class AWEUserAccountCertInfoModel;

@interface IESIMUserVerifyModelConfig : NSObject

@property (nonatomic) BOOL needIconBg;
@property (retain, nonatomic) AWEUserAccountCertInfoModel *accountCertInfo;

+ (id)instanceWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
