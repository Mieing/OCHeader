@interface AnnieX.SLInfoPerf : NSObject {
    void /* unknown type, empty encoding */ __rts_jsb_call;
    void /* unknown type, empty encoding */ jsb_func_call;
    void /* unknown type, empty encoding */ jsb_func_convert_params;
    void /* unknown type, empty encoding */ jsb_func_platform_method;
    void /* unknown type, empty encoding */ jsb_callback_thread_switch;
    void /* unknown type, empty encoding */ jsb_callback_call;
    void /* unknown type, empty encoding */ jsb_callback_convert_params;
    void /* unknown type, empty encoding */ jsb_callback_invoke;
    void /* unknown type, empty encoding */ jsb_func_call_start;
    void /* unknown type, empty encoding */ jsb_func_call_end;
    void /* unknown type, empty encoding */ jsb_callback_thread_switch_start;
    void /* unknown type, empty encoding */ jsb_callback_thread_switch_end;
    void /* unknown type, empty encoding */ jsb_callback_call_start;
    void /* unknown type, empty encoding */ jsb_callback_call_end;
}

@property (nonatomic) long long jsb_call;

- (id)init;

@end
