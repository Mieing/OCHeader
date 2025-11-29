@class NSString, UIView;
@protocol IESIMBulletContainerProtocol;

@interface IESIMBulletContainerReuseItem : NSObject

@property (copy, nonatomic) NSString *bulletContainerKey;
@property (retain, nonatomic) UIView<IESIMBulletContainerProtocol> *bulletContainer;

- (id)initWithBulletContainerKey:(id)a0 bulletContainer:(id)a1;
- (void).cxx_destruct;

@end
