@class NSString, UIFont;

@interface IESIMEmoticonYYTextAttachmentCreator : NSObject <IESIMEmoticonAttachmentCreator>

@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double emojiHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createAttachmentWithAttrStr:(id)a0 matchResult:(id)a1 image:(id)a2;
- (void).cxx_destruct;

@end
