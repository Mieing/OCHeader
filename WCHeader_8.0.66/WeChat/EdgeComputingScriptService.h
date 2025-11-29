@class EdgeComputingJSScriptEngine;

@interface EdgeComputingScriptService : MMObject {
    EdgeComputingJSScriptEngine *scriptEngine;
}

- (id)init;
- (id)executeScript:(id)a0 withDatas:(id)a1 withPeriodStartTime:(unsigned long long)a2 withPeriodEndTime:(unsigned long long)a3;
- (id)getScriptArgs:(unsigned int)a0 withClientVersion:(unsigned int)a1 withPeriodStartTime:(unsigned long long)a2 withPeriodEndTime:(unsigned long long)a3;
- (void)clear;
- (id)executePureScript:(id)a0 andData:(id)a1;
- (void).cxx_destruct;

@end
