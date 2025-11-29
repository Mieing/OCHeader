@class NSString, QMapContext;

@interface QTextManager : NSObject <QTextChangeDelegate>

@property (weak, nonatomic) QMapContext *mapContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addText:(id)a0;
- (void)removeText:(id)a0;
- (void)updateText:(id)a0;
- (void)textChanged:(id)a0;
- (void).cxx_destruct;

@end
