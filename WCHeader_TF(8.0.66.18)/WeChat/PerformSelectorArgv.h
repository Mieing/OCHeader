@class MMContext;

@interface PerformSelectorArgv : NSObject {
    SEL m_selector;
    id m_argument;
    MMContext *m_context;
}

- (id)initWithSelector:(SEL)a0 argument:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
