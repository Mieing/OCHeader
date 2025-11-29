@class NSString, AWEIMLiveRedPacketOpenViewController, UIImage, NSAttributedString;

@interface AWEIMLiveRedPacketOpenViewModel : NSObject <AWEIMLiveRedPacketOpenViewPropsProtocol>

@property (weak, nonatomic) AWEIMLiveRedPacketOpenViewController *openVC;
@property (copy, nonatomic) NSAttributedString *nameAttrString;
@property (copy, nonatomic) NSAttributedString *hintAttrString;
@property (copy, nonatomic) NSAttributedString *titleAttrString;
@property (copy, nonatomic) NSAttributedString *subTitleAttrString;
@property (retain, nonatomic) UIImage *avatarImage;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (copy, nonatomic) id /* block */ closeTapAction;
@property (copy, nonatomic) id /* block */ jumpTapAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
