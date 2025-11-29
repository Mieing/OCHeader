@class HTSLiveTextPiece;

@interface HTSLiveMessageListNodeAction : NSObject

@property (retain, nonatomic) HTSLiveTextPiece *piece;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } clickRange;
@property (copy, nonatomic) id /* block */ tapAction;

- (void).cxx_destruct;

@end
