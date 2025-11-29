@class NSPointerArray, NSMutableArray, NSMutableAttributedString;

@interface IESECAttributedContentManager : NSObject

@property (retain, nonatomic) NSPointerArray *delegates;
@property (retain, nonatomic) NSMutableArray *contents;
@property (readonly, nonatomic) BOOL isCompleted;
@property (readonly, nonatomic) NSMutableAttributedString *content;

- (unsigned long long)indexOfDelegate:(id)a0;
- (void)notifyContentUpdate;
- (void)asyncMakeContents;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (void)addContent:(id)a0;

@end
