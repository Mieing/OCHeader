@class MagicSclFrameSetView;

@interface MagicWeAppCardFrameItem : NSObject

@property (nonatomic) unsigned int bizType;
@property (nonatomic) unsigned int frameId;
@property (retain, nonatomic) MagicSclFrameSetView *frameSetView;
@property (copy, nonatomic) id /* block */ insertCompletion;

- (void).cxx_destruct;

@end
