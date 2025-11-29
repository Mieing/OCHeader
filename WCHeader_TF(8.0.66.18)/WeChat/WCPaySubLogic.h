@protocol WCPaySubLogicDelegate;

@interface WCPaySubLogic : NSObject {
    id<WCPaySubLogicDelegate> m_baseDelegate;
}

- (id)initWithBaseDelegate:(id)a0;
- (void).cxx_destruct;

@end
