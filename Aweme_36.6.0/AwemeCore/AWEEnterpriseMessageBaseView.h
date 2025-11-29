@class NSString, NSDate;

@interface AWEEnterpriseMessageBaseView : UIView <AWEEnterpriseMessageViewProtocol, AWEEnterpriseIMMessageViewProtocol>

@property (retain, nonatomic) NSDate *startLoadTimeDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGSize { double width; double height; } currentContentSize;
@property (copy, nonatomic) id /* block */ didClickSubmitBlock;
@property (copy, nonatomic) id /* block */ didUpdateCellContentSizeBlock;
@property (copy, nonatomic) id /* block */ loadDurationBlock;
@property (copy, nonatomic) id /* block */ didFinishLynxLoadBlock;

@end
