@class NSString, UIView;

@interface AWEProfileExtensionAreaRichContent : NSObject <AWEProfileExtensionAreaRichContentConfigProtocol>

@property (retain, nonatomic) UIView *view;
@property (nonatomic) double height;
@property (copy, nonatomic) id /* block */ cardDisappearedBlock;
@property (copy, nonatomic) id /* block */ cardPositionUpdateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
