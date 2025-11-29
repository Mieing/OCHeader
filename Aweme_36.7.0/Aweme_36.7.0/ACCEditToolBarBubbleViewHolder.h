@class NSString, ACCEditNoteStyleToolBarBubbleViewState, NSObject, UIButton;
@protocol ACCMultiStyleAlertProtocol;

@interface ACCEditToolBarBubbleViewHolder : NSObject <ACCEditUIViewHolderProtocol>

@property (retain, nonatomic) ACCEditNoteStyleToolBarBubbleViewState *viewState;
@property (retain, nonatomic) NSObject<ACCMultiStyleAlertProtocol> *alert;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) BOOL onlyDirectShowSettings;
@property (weak, nonatomic) id component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)componentClass;

@end
