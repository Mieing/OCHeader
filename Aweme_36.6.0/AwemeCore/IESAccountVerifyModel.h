@class UIColor, NSString;
@protocol IESAccountVerifyInfoModelProtocol;

@interface IESAccountVerifyModel : NSObject <IESAccountVerifyModelProtocol>

@property (retain, nonatomic) id<IESAccountVerifyInfoModelProtocol> accountCertInfo;
@property (nonatomic) BOOL needIconBg;
@property (retain, nonatomic) UIColor *iconBgColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
