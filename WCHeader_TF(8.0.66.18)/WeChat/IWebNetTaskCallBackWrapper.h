@class IWebNetTaskCallBack;

@interface IWebNetTaskCallBackWrapper : NSObject {
    IWebNetTaskCallBack *m_callbackImpl;
}

- (void).cxx_destruct;

@end
